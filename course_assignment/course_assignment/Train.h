#pragma once
#include <iostream>
#include <sstream>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
#include <msclr/marshal_cppstd.h>

class Train
{
	private:
	int trainNumber;
	std::string startStation;
	std::string endStation;
	std::vector<std::string> intermediateStations;
	std::string departureTime;
	std::string arrivalTime;
	double distance;
	public:
		Train(int trainNumber, std::string start,
			std::string finish, std::vector<std::string> stations, std::string depTrime,
			std::string arrvtime, double length);

		Train() : trainNumber(), startStation(" "), endStation(" "), departureTime(" : "), arrivalTime(" : "), distance(0.0) {};
		//Train(const Train* otherTrain);

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
		void setDepartureTime(std::string departureT);
		std::string getDepartureTime();


		//setter and getter for train arrival time
		void setArrivalTime(std::string arrivalT);
		std::string getArrivalTime();


		//setter and getter for train destinations
		void setDistance(double destination);
		double getDistance();


		double calculateSpeed();
		std::tm parseTimeString(const std::string& timeString);
};

std::vector<Train> getTrainsThroughStation(std::vector<Train> trains, int searchNumber);
void mergeSortByStartStation(std::vector<Train> trains);

std::vector<std::string> explode(const std::string& str, const char& ch);

//std::vector<Train> trains;