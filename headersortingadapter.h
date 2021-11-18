#ifndef HEADERSORTINGADAPTER_H
#define HEADERSORTINGADAPTER_H

#include <QObject>
#include <QPoint>

class QTableView;

class HeaderSortingAdapter : public QObject
{
    Q_OBJECT
public:
    HeaderSortingAdapter(QTableView *table);
    bool eventFilter(QObject *watched, QEvent *event) override;

private:
    QTableView *m_table = nullptr;
    QPoint m_pressPos;
    bool m_isMoving = false;
};

#endif
