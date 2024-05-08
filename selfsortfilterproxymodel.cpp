#include "selfsortfilterproxymodel.h"

/*SelfSortFilterProxyModel::SelfSortFilterProxyModel(QObject *parent)
    : QSortFilterProxyModel(parent)
{

}*/
bool SelfSortFilterProxyModel::filterAcceptsRow(int sourceRow, const QModelIndex &sourceParent) const
{
    QModelIndex index1 = sourceModel()->index(sourceRow, 1, sourceParent);
//    QModelIndex index1 = sourceModel()->index(sourceRow, 1, sourceParent);
//    QModelIndex index2 = sourceModel()->index(sourceRow, 2, sourceParent);
//    QModelIndex index3 = sourceModel()->index(sourceRow, 3, sourceParent);
//    QModelIndex index4 = sourceModel()->index(sourceRow, 4, sourceParent);
    QModelIndex index5 = sourceModel()->index(sourceRow, 5, sourceParent);



    if(sourceModel()->data(index1).toString().toLower().contains(filterRegularExpression()) ||
    //    sourceModel()->data(index1).toString().toLower().contains(filterRegularExpression()) ||
    //    sourceModel()->data(index2).toString().toLower().contains(filterRegularExpression()) ||
   //     sourceModel()->data(index3).toString().toLower().contains(filterRegularExpression()) ||
   //     sourceModel()->data(index4).toString().toLower().contains(filterRegularExpression()))
        sourceModel()->data(index5).toString().toLower().contains(filterRegularExpression()))
        return true;
    else return false;
}


