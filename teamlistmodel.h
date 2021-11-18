#ifndef TEAMLISTMODEL_H
#define TEAMLISTMODEL_H

#include <QAbstractTableModel>
#include "teamlist.h"

class TeamListModel : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit TeamListModel(TeamList *list, QObject *parent = nullptr);

    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
    TeamList *list;
};

#endif // TEAMLISTMODEL_H
