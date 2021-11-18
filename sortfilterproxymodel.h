#ifndef SORTFILTERPROXYMODEL_H
#define SORTFILTERPROXYMODEL_H

#include <QSortFilterProxyModel>

class SortFilterProxyModel : public QSortFilterProxyModel
{
    bool lessThan(const QModelIndex &rLeft, const QModelIndex &rRight) const
    {
        int const left_row  = rLeft.row();
        int const right_row = rRight.row();

        int const num_columns = sourceModel()->columnCount();
        for(int compared_column = rLeft.column(); compared_column<num_columns; ++compared_column) {
            QModelIndex const left_idx = sourceModel()->index(left_row, compared_column, QModelIndex());
            QModelIndex const right_idx = sourceModel()->index(right_row, compared_column, QModelIndex());

            QString const leftData = sourceModel()->data(left_idx).toString();
            QString const rightData = sourceModel()->data(right_idx).toString();

            int const compare = QString::localeAwareCompare(leftData, rightData);
            if(compare!=0) {
                return compare<0;
            }
        }

        return false;
    }
};


#endif // SORTFILTERPROXYMODEL_H
