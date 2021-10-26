#ifndef TEAMLIST_H
#define TEAMLIST_H
#include "footballteam.h"
#include <string>
#include <list>
#include <QFile>


class TeamList
{
public:
    enum category {teamName, stadiumName, seatingCapacity, location, conference, division, surfaceType, stadiumRoofType, dateOpened};
    TeamList();
    TeamList(QFile file);
    void update(QFile file);
    void printList();
    void sortList(category category);

private:
    std::list<FootballTeam> teamList;
};

#endif // TEAMLIST_H
