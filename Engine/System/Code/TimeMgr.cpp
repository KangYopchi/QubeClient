#include "TimeMgr.h"

IMPLEMENT_SINGLETON(Engine::CTimeMgr)

Engine::CTimeMgr::CTimeMgr(void)
{

}

Engine::CTimeMgr::~CTimeMgr(void)
{

}

void Engine::CTimeMgr::InitTime(void)
{
	QueryPerformanceCounter(&m_FrameTime);
	QueryPerformanceCounter(&m_FixTime);
	QueryPerformanceCounter(&m_LastTime);

	/// Get Frequency of Cpu clock
	QueryPerformanceFrequency(&m_CpuTick);
}

void Engine::CTimeMgr::SetTime(void)
{
	/// Get Cpu time
	QueryPerformanceCounter(&m_FrameTime);

	if(m_FrameTime.QuadPart - m_LastTime.QuadPart > m_CpuTick.QuadPart)
	{
		QueryPerformanceFrequency(&m_CpuTick);
		m_LastTime.QuadPart = m_FrameTime.QuadPart;
	}

	/// Get interval time
	m_fTime = float(m_FrameTime.QuadPart - m_FixTime.QuadPart) / m_CpuTick.QuadPart;

	m_FixTime = m_FrameTime;
}

float Engine::CTimeMgr::GetTime(void)
{
	return m_fTime;
}