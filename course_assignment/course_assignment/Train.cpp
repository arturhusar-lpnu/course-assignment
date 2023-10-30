#include "Train.h"

//setter and getter for train number
void Train::setNumber(int number)
{
	this->trainNumber = number;
}

int Train::getNumber()
{
	return this->trainNumber;
}


//setter and getter for train starting station
void Train::setStartStation(std::string start)
{
	this->startStation = start;
}

std::string Train::getStartStation()
{
	return this->startStation;
}

//setter and getter for train destination
void Train::setEndStation(std::string destination)
{
	this->endStation = destination;
}

std::string Train::getEndStation()
{
	return this->endStation;
}



//setter and getter for train intermediate stations
void Train::setStations(std::vector<std::string> stations)
{
	for (int i = 0; i < intermediateStations.size(); i++)
	{
		intermediateStations[i] = stations[i];
	}
}

std::vector<std::string> Train::getStations()
{
	return intermediateStations;
}


//setter and getter for train departure time
void Train::setDepartureTime(std::tm departureT)
{
	this->departureTime = departureT;
}

std::tm Train::getDepartureTime()
{
	return this->departureTime;
}


//setter and getter for train arrival time
void Train::setArrivalTime(std::tm arrivalT)
{
	this->arrivalTime = arrivalT;
}

std::tm Train::getArrivalTime()
{
	return this->arrivalTime;
}


//setter and getter for train destinations
void Train::setDistance(double distance_)
{
	this->distance = distance_;
}

double Train::getDistance()
{
	return this->distance;
}

//find the list of trains by number
std::vector<Train> getTrainsThroughStation(std::vector<Train> trains, int searchNumber)
{
	std::vector<Train> selectedTrains;// = gcnew array<Train^>;

	for each (auto train in trains)
	{
		if (train.getNumber() == searchNumber)
		{
			selectedTrains.push_back(train);
		}
	}
	
	return selectedTrains;
}

double Train::calculateSpeed()
{
	std::time_t tDeparture = std::mktime(&departureTime);
	std::time_t tArrival = std::mktime(&arrivalTime);

	double hours = difftime(tArrival, tDeparture) / 3600.0;
	return distance / hours;
}

//
void mergeSortByStartStation(std::vector<Train> trains)
{
	std::sort(trains.begin(), trains.end(), [](Train& a, Train& b) {
		return a.getStartStation() < b.getStartStation();
	});//change for mergesort
}

//
void mergeSortBySpeed(std::vector<Train> trains)
{
	std::sort(trains.begin(), trains.end(), [](Train& a, Train& b) {
		return a.calculateSpeed() < b.calculateSpeed();
	});//change for mergesort
}

double calculateAverageSpeed(std::vector<Train> trains)
{
	double avgSpeed{};

	for each (auto train in trains)
	{
		avgSpeed += train.calculateSpeed();
	}
	avgSpeed /= trains.size();


	return avgSpeed;
}

//departing trains in a specific time period
std::vector<Train> findTrainByDeparture(
	const std::vector<Train>& trains, const std::string& station, std::tm& startTime, std::tm& endTime)
{
	std::vector<Train> departingTrains;
	for each (Train train in trains)
	{
		if (train.getStartStation() == station &&
			std::mktime(&train.getDepartureTime()) >= std::mktime(&startTime) &&
			std::mktime(&train.getDepartureTime()) <= std::mktime(&endTime))
		{
			departingTrains.push_back(train);
		}
	}
}


//arriving trains in a specific time period
std::vector<Train> findTrainByArrival(
	const std::vector<Train>& trains, const std::string& station, std::tm& startTime, std::tm& endTime)
{
	std::vector<Train> arrivingTrains;
	for each (Train train in trains)
	{
		if (train.getEndStation() == station &&
			std::mktime(&train.getArrivalTime()) >= std::mktime(&startTime) &&
			std::mktime(&train.getArrivalTime()) <= std::mktime(&endTime))
		{
			arrivingTrains.push_back(train);
		}
	}
}