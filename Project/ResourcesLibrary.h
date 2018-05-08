#pragma once
#include  <unordered_map>
#include <string>
#include <SFML/Graphics.hpp>
#include <memory>

using std::shared_ptr;
typedef shared_ptr<sf::RectangleShape> ImageType;

class ResourcesLibrary
{
public:
	~ResourcesLibrary();
	static ResourcesLibrary& getInstance();
	ImageType getImage(std::string imageName);
	double getValue(std::string valueName);

private:
	std::unordered_map<std::string, ImageType> m_images;
	std::unordered_map<std::string, double> m_values;
	void resetImages();
	void resetValues();
	void addImage(std::string imageName);
	ResourcesLibrary();
	ResourcesLibrary(const ResourcesLibrary&) {}
};

