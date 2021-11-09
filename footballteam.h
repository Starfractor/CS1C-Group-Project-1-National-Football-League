#ifndef FOOTBALLTEAM_H
#define FOOTBALLTEAM_H
#include <QString>


class FootballTeam
{
public:
    FootballTeam();
    FootballTeam(QString teamName, QString stadiumName, QString seatingCapacity, QString location, QString conference, QString division, QString surfaceType, QString stadiumRoofType, int dateOpened);

    QString getTeamName() const;
    QString getStadiumName() const;
    QString getSeatingCapacity() const;
    QString getLocation() const;
    QString getConference() const;
    QString getDivision() const;
    QString getSurfaceType() const;
    QString getStadiumRoofType() const;
    int getDateOpened() const;
private:
    QString teamName;
    QString stadiumName;
    QString seatingCapacity;
    QString location;
    QString conference;
    QString division;
    QString surfaceType;
    QString stadiumRoofType;
    int dateOpened;
};

#endif // FOOTBALLTEAM_H
