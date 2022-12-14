#include "Time.h"

namespace nae
{
	void Time::Tick()
	{
		clock_duration duration = clock::now() - m_startTimePoint;
		time = duration.count() / static_cast<float>(clock_duration::period::den); //1 tril

		duration = clock::now() - m_frameTimePoint; 
		deltaTime = duration.count() / static_cast<float>(clock_duration::period::den); 

		m_frameTimePoint = clock::now();
	}
}
