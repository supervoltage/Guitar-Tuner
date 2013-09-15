#include <iostream>
#include <cmath>
#include <cstdlib>
#include <SFML/Audio.hpp>

void sineGenerator(double freq)
{
	const unsigned SAMPLES = 352800;
	const unsigned SAMPLE_RATE = 44100;
	const unsigned AMPLITUDE = 20000;
	
	sf::Int16 raw[SAMPLES];
	
	const double TWO_PI = 6.28318;
	const double increment = freq/44100;
	double x = 0;
	for (unsigned i = 0; i <= SAMPLES; i++)
	{
		raw[i] = AMPLITUDE * sin(x*TWO_PI);
		x += increment;
	}
	
	sf::SoundBuffer Buffer;
	if (!Buffer.loadFromSamples(raw, SAMPLES, 1, SAMPLE_RATE))
	{
		std::cerr << "Buffer loading failed dramatically" << std::endl;
		exit(0);
	}
	
	sf::Sound Sound;
	Sound.setBuffer(Buffer);
	Sound.setLoop(true);
	Sound.play();
	while (1)
	{
		sf::sleep(sf::milliseconds(100));
	}
}
