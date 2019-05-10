#include "GraphDialog.h"
#include "ui_GraphDialog.h"

#include <QtCharts>

using namespace QtCharts;

GraphDialog::GraphDialog(QWidget *parent, const QString & file_path) :
    QDialog(parent),
    ui(new Ui::GraphDialog)
{
    ui->setupUi(this);
    GraphData(file_path);
}

GraphDialog::~GraphDialog()
{
    delete ui;
}

void GraphDialog::GraphData(const QString & file_path)
{
    QBarSet * set;
    QBarSeries * series = new QBarSeries();
    QChart * chart = new QChart();
    QList<QPair<QString, int>> frequencies = GetMapData(file_path);
    int count = 0;
    for(auto it = frequencies.begin(); it != frequencies.end(); it++)
    {
        set = new QBarSet(it->first);
        *set << it->second;
        series->append(set);
        if(count++ > 5)
        {
            break;
        }
    }
    chart->addSeries(series);
    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, frequencies.first().second);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
    chart->setTitle("User Frequency Data");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);
    QChartView * chart_view = new QChartView(chart);
    chart_view->setRenderHint(QPainter::Antialiasing);
    ui->horizontalLayout->addWidget(chart_view);
}

QList<QPair<QString, int>> GraphDialog::GetMapData(const QString & file_path)
{
    QList<QPair<QString, int>> frequencies;
    QFile in_file(file_path);

    if(in_file.open(QFile::ReadOnly | QFile::Text))
    {
        QStringList temp;
        QString pattern;
        QString frequency;
        QTextStream input(&in_file);
        QString map_data = input.readAll();
        in_file.close();
        temp = map_data.split("\n");
        for(auto it = temp.begin(); it != temp.end(); it++)
        {
            QStringList pattern_frequency = it->split(" ");
            if(pattern_frequency.length() == 2)
            {
                pattern = pattern_frequency[0];
                frequency = pattern_frequency[1];
                if(pattern.length() == 6 && frequency.toInt() > 0)
                {

                    frequencies.append({pattern, frequency.toInt()});
                }
            }
        }
    }

    // Sort QList ascending by number of occurences
    for(int i = 0; i < frequencies.size() - 1; i++)
    {
        for(int j = 0; j < frequencies.size() - i - 1; j++)
        {
            if(frequencies.value(j).second < frequencies.value(j + 1).second )
            {
                frequencies.swap(j, j+1);
            }
        }
    }
    return frequencies;
}
