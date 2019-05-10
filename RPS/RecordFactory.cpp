#include "RecordFactory.h"
#include "Record.h"
#include "RecordUI.h"

Record * MakeRecord(RecordType record_type, QLabel * wins_playerone_label, QLabel * wins_playertwo_label, QLabel * ties_label)
{
    switch(record_type)
    {
        case RecordType::RecordNonGUI:
            return new Record();
            break;
        case RecordType::RecordGUI:
            return new RecordUI(wins_playerone_label, wins_playertwo_label, ties_label);
            break;
        default:
            return nullptr;
    }
}
