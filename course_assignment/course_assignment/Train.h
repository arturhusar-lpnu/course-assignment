#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Train
{
	private:
	int trainNumber;
	std::string startStation;
	std::string endStation;
	std::vector<std::string> intermediateStations;
	std::tm departureTime;
	std::tm arrivalTime;
	double distance;
	public:
		Train(std::string trainNumber, std::string start,
			std::string finish, std::vector<std::string> stations, std::tm depTrime,
			std::tm arrvtime, double length);	

		Train() : trainNumber(), startStation(" "), endStation(" "),distance(0.0) 
		{
			std::memset(&departureTime, 0, sizeof(std::tm));
			std::memset(&arrivalTime, 0, sizeof(std::tm));
		}
		Train(const Train* otherTrain);

		//setter and getter for train number
		void setNumber(int number);
		int getNumber();

		//setter and getter for train starting station
		void setStartStation(std::string start);
		std::string getStartStation();


		//setter and getter for train destination
		void setEndStation(std::string destination);
		std::string getEndStation();



		//setter and getter for train intermediate stations
		void setStations(std::vector<std::string> stations);
		std::vector<std::string> getStations();


		//setter and getter for train departure time
		void setDepartureTime(std::tm departureT);
		std::tm getDepartureTime();


		//setter and getter for train arrival time
		void setArrivalTime(std::tm arrivalT);
		std::tm getArrivalTime();


		//setter and getter for train destinations
		void setDistance(double destination);
		double getDistance();


		double calculateSpeed();
};

std::vector<Train> getTrainsThroughStation(int number);
void mergeSortByStartStation(std::vector<Train> trains);

