#include "footballteam.h"

FootballTeam::FootballTeam()
{
    teamName = "Unknown";
    stadiumName = "Unknown";
    seatingCapacity = 0;
    location = "Unknown";
    conference = "Unknown";
    division = "Unknown";
    surfaceType = "Unknown";
    stadiumRoofType = "Unknown";
    dateOpened = 0;
}

FootballTeam::FootballTeam(QString teamName, QString stadiumName, int seatingCapacity, QString location, QString conference,
             QString division, QString surfaceType, QString stadiumRoofType, int dateOpened)
{
    this->teamName = teamName;
    this->stadiumName = stadiumName;
    this->seatingCapacity = seatingCapacity;
    this->location = location;
    this->conference = conference;
    this->division = division;
    this->surfaceType = surfaceType;
    this->stadiumRoofType = stadiumRoofType;
    this->dateOpened = dateOpened;
}

QString FootballTeam::getTeamName()const
{
    return teamName;
}

QString FootballTeam::getStadiumName()const
{
    return stadiumName;
}

int FootballTeam::getSeatingCapacity()const
{
    return seatingCapacity;
}

QString FootballTeam::getLocation()const
{
    return location;
}

QString FootballTeam::getDivision()const
{
    return division;
}

QString FootballTeam::getSurfaceType()const
{
    return surfaceType;
}

QString FootballTeam::getStadiumRoofType()const
{
    return stadiumRoofType;
}

int FootballTeam::getDateOpened()const
{
    return dateOpened;
}
