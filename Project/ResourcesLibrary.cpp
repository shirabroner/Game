#include "ResourcesLibrary.h"



ResourcesLibrary::ResourcesLibrary()
{
	resetImages();
	resetValues();
}


ResourcesLibrary::~ResourcesLibrary()
{
}

ResourcesLibrary & ResourcesLibrary::getInstance()
{
	static ResourcesLibrary m_instance;
	return m_instance;
}

ImageType ResourcesLibrary::getImage(std::string imageName)
{
	return m_images[imageName];
}

double ResourcesLibrary::getValue(std::string valueName)
{
	auto value =  m_values[valueName];
	return value;
}

void ResourcesLibrary::resetImages()
{
	addImage("Splash");
}

void ResourcesLibrary::resetValues()
{
	m_values["ScreenWidth"] = 700;
	m_values["ScreenHeight"] = 700;
	m_values["BackgroundSleepSeconds"] = 2;
}

void ResourcesLibrary::addImage(std::string imageName)
{
	sf::Texture* image = new sf::Texture();
	image->loadFromFile("Images/"+ imageName+ ".png");
	
	auto rec = std::make_shared<sf::RectangleShape>(sf::Vector2f(700,700));
	
	//rec->setFillColor(sf::Color::Green);
	rec->setTexture(image);
	m_images[imageName] = rec;
}
