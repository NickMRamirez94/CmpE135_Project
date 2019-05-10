#ifndef RECORDFACTORY_H
#define RECORDFACTORY_H

#include <QLabel>

#include "Record.h"
#include "RecordType.h"

class RecordFactory
{
public:
    static Record * MakeRecord(RecordType record_type, QLabel * wins_playerone_label, QLabel * wins_playertwo_label, QLabel * ties_label);
};

#endif // RECORDFACTORY_H
