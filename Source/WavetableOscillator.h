#pragma once
#include <vector>

class WavetableOscillator
{
public:
	WavetableOscillator(std::vector<float> waveTable, double sampleRate);

	float getSample();
	void setFrequency(float frequency);
	void stop();
	bool isPlaying() const;

private:
	float index = 0.f;
	float indexIncrement = 0.f;
	std::vector<float> waveTable;
	double sampleRate;
};

