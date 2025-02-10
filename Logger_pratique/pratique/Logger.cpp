#include "Logger.h"
#include <iostream>
#include <fstream>

using namespace Patate;

Patate::Logger::Logger(LogType new_type)
{
	this->logging_type = new_type;
	if (this->logging_type == LogType::Fichier) {
	file_write.open("logger,txt",std::fstream::out);
	}
}

Patate::Logger::~Logger()
{
	if (this->logging_type == LogType::Fichier) {
		file_write.close();
	}
}

void Logger::print(std::string message)
{
	if (this->logging_type == LogType::Console) {
		std::cout << "[INFO]:" << message << std::endl;
	}
	else {
		file_write << "[INFO]:" << message << std::endl;
	}
}

void Logger::warn(std::string message)
{
	if (this->logging_type == LogType::Console) {
		std::cout << "[WARN]:" << message << std::endl;
	}
	else {
		file_write << "[WARN]:" << message << std::endl;
	}
}

void Logger::error(std::string message)
{
	if (this->logging_type == LogType::Console) {
		std::cout << "[ERROR]:" << message << std::endl;
	}
	else {
		file_write << "[ERROR]:" << message << std::endl;
	}
}


