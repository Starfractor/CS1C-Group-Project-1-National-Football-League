#include "teamlistmodel.h"

TeamListModel::TeamListModel(TeamList *list, QObject *parent)
    : QAbstractTableModel(parent)
{
    this->list = list;
}

QVariant TeamListModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(orientation == Qt::Horizontal && role == Qt::DisplayRole)
    {
        switch(section)
        {
            case 0:
            return QString("Team Name");
            break;
            case 1:
            return QString("Stadium Name");
            break;
            case 2:
            return QString("Seating Capacity");
            break;
            case 3:
            return QString("Location");
            break;
            case 4:
            return QString("Conference");
            break;
            case 5:
            return QString("Division");
            break;
            case 6:
            return QString("Surface Type");
            break;
            case 7:
            return QString("Stadium Roof Type");
            break;
            case 8:
            return QString("Date Opened");
            break;
        }
    }

    return QVariant();
}

int TeamListModel::rowCount(const QModelIndex & /*parent*/) const
{
    return list->getTeamList().length();
}

int TeamListModel::columnCount(const QModelIndex & /*parent*/) const
{
    return 9;
}

QVariant TeamListModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole)
    {
        switch(index.column())
        {
            case 0:
            return list->getTeamList().at(index.row()).getTeamName();
            break;
            case 1:
            return list->getTeamList().at(index.row()).getStadiumName();
            break;
            case 2:
            return list->getTeamList().at(index.row()).getSeatingCapacity();
            break;
            case 3:
            return list->getTeamList().at(index.row()).getLocation();
            break;
            case 4:
            return list->getTeamList().at(index.row()).getConference();
            break;
            case 5:
            return list->getTeamList().at(index.row()).getDivision();
            break;
            case 6:
            return list->getTeamList().at(index.row()).getSurfaceType();
            break;
            case 7:
            return list->getTeamList().at(index.row()).getStadiumRoofType();
            break;
            case 8:
            return list->getTeamList().at(index.row()).getDateOpened();
            break;
        }
    }

    return QVariant();
}
