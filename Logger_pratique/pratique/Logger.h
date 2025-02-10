#pragma once
#include <string>
#include <fstream>
namespace Patate{
	enum class LogType {
		Console,
		Fichier
	};LogType;


	class Logger
	{
	public:
		Logger(LogType new_type);
		~Logger();
		void print(std::string message);
		void warn(std::string message);
		void error(std::string message);
	private:
		LogType logging_type = LogType ::Console; 
		std::fstream file_write;
	};

};


