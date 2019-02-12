#include <iostream>

//make "m_" prefix for private variables 
class Log
{

public:
	enum Level
	{
		LevelError = 0, LevelWarning, LevelInfo
	};

private:
	Level m_LogLevel = LevelInfo;
public:
	void setLevel(Level level)
	{
		m_LogLevel = level;
	}
	void Eror(const char* message)
	{
		if (m_LogLevel >= LevelError) {
			std::cout << "[ERROR]" << message << std::endl;
		}
	}
	void Warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning) {
			std::cout << "[WARNING]" << message << std::endl;
		}
	}
	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo) {
			std::cout << "[INFO]" << message << std::endl;
		}
	}
};

/*
int main()
{

	Log log;
	log.setLevel(log.LevelError);
	log.Eror("Hello!");
	log.Info("Hello!");
	log.Warn("Hello!");
	std::cin.get();
}
*/