#include "Train.h"
//std::vector<Train> trains;
//setter and getter for train number

Train::Train(int Number, std::string start,
	std::string finish, std::vector<std::string> stations, std::string depTrime,
	std::string arrvtime, double length)
{
	this->trainNumber = Number;
	this->startStation = start;
	this->endStation = finish;
	for(int i = 0; i < stations.size(); i++)
	{
		intermediateStations.push_back(stations[i]);
	}
	departureTime = depTrime;
	arrivalTime = arrvtime;

	distance = length;
}


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
void Train::setDepartureTime(std::string departureT)
{
	this->departureTime = departureT;
}

std::string Train::getDepartureTime()
{
	return this->departureTime;
}


//setter and getter for train arrival time
void Train::setArrivalTime(std::string arrivalT)
{
	this->arrivalTime = arrivalT;
}

std::string Train::getArrivalTime()
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

std::tm Train::parseTimeString(const std::string& timeString) {
	std::tm timeStruct = {};

	std::istringstream iss(timeString);
	std::string token;

	std::getline(iss, token, ':');
	timeStruct.tm_hour = std::stoi(token);

	std::getline(iss, token);
	timeStruct.tm_min = std::stoi(token);

	return timeStruct;
}

double Train::calculateSpeed()
{
	std::tm departure = parseTimeString(departureTime);
	std::tm arrival = parseTimeString(arrivalTime);

	std::time_t tDeparture = std::mktime(&departure);
	std::time_t tArrival = std::mktime(&arrival);

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
	std::tm departure;
	for each (Train train in trains)
	{
		departure = train.parseTimeString(train.getDepartureTime());
		if (train.getStartStation() == station &&
			std::mktime(&departure) >= std::mktime(&startTime) &&
			std::mktime(&departure) <= std::mktime(&endTime))
		{
			departingTrains.push_back(train);
		}
	}

	return departingTrains;
}


//arriving trains in a specific time period
std::vector<Train> findTrainByArrival(
	const std::vector<Train>& trains, const std::string& station, std::tm& startTime, std::tm& endTime)
{
	std::vector<Train> arrivingTrains;
	std::tm arrival;
	for each (Train train in trains)
	{

		if (train.getEndStation() == station &&
			std::mktime(&arrival) >= std::mktime(&startTime) &&
			std::mktime(&arrival) <= std::mktime(&endTime))
		{
			arrivingTrains.push_back(train);
		}
	}

	return arrivingTrains;
}

std::vector<std::string> explode(const std::string& str, const char& ch) {
	std::string next;
	std::vector<std::string> result;

	// For each character in the string
	for (std::string::const_iterator it = str.begin(); it != str.end(); it++) {
		// If we've hit the terminal character
		if (*it == ch) {
			// If we have some characters accumulated
			if (!next.empty()) {
				// Add them to the result vector
				result.push_back(next);
				next.clear();
			}
		}
		else {
			// Accumulate the next character into the sequence
			next += *it;
		}
	}
	if (!next.empty())
		result.push_back(next);
	return result;
}