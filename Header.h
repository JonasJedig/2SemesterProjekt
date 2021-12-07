#pragma once



class Master
{
public:
	Master();
	~Master();
	void activateSystem();
	void wrongCode();
	void turnOn(int device);
	void turnOff(int device);
	void sendSMS();
	void playAlarmSound();


private:
	int time_;
	int slaveNumber_;
	int unitNumber_;
};

Master::Master()
{
}

Master::~Master()
{
}

inline void Master::activateSystem()
{
}

inline void Master::wrongCode()
{
}

inline void Master::turnOn(int)
{
}

inline void Master::turnOff(int device)
{
}

inline void Master::sendSMS()
{
}

inline void Master::playAlarmSound()
{
}

