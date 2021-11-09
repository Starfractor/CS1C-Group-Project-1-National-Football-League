
#include "teamlist.h"

TeamList::TeamList(){}
TeamList::TeamList(QFile file)
{
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << file.errorString();
    }

    //Reads a line and takes stores data
    while(!file.atEnd())
    {
        //Sets up data from line into object
        QList data = file.readLine().split('|');

        //Will only push if line is set up correctly
        if(data.length() == 9)
        {
            QString teamName = data[0];
            QString stadiumName = data[1];
            QString seatingCapacity = data[2];
            QString location = data[3];
            QString conference = data[4];
            QString division = data[5];
            QString surfaceType = data[6];
            QString stadiumRoofType = data[7];
            int dateOpened = data[8].toInt();

            //Push to the team list
            teamList.push_back(FootballTeam(teamName, stadiumName, seatingCapacity, location, conference, division, surfaceType, stadiumRoofType, dateOpened));
        }
    }
}

void TeamList::update(QFile file)
{
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << file.errorString();
    }

    //Reads a line and takes stores data
    while(!file.atEnd())
    {
        //Sets up data from line into object
        QList data = file.readLine().split('|');

        //Will only push if line is set up correctly
        if(data.length() == 9)
        {
            QString teamName = data[0];
            QString stadiumName = data[1];
            QString seatingCapacity = data[2];
            QString location = data[3];
            QString conference = data[4];
            QString division = data[5];
            QString surfaceType = data[6];
            QString stadiumRoofType = data[7];
            int dateOpened = data[8].toInt();

            //Create team and add to list if they do not already exist
            FootballTeam team(teamName, stadiumName, seatingCapacity, location, conference, division, surfaceType, stadiumRoofType, dateOpened);
            if(!alreadyExists(team))
            {
                teamList.push_back(team);
            }
        }
    }
}

void TeamList::printList()
{

}

void TeamList::sortList(category category)
{

}

bool TeamList::alreadyExists(FootballTeam team)
{
    for(QList<FootballTeam>::iterator it = teamList.begin(); it != teamList.end(); it++)
    {
        if(team.getTeamName() == it->getTeamName())
        {
            return true;
        }
    }
    return false;
}

QList<FootballTeam> TeamList::getTeamList() const
{
    return teamList;
}
