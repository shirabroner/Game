#include "ImagesLibrary.h"



ImagesLibrary::ImagesLibrary()
{
	resetImages();
}


ImagesLibrary::~ImagesLibrary()
{
}

ImagesLibrary & ImagesLibrary::getInstance()
{
	static ImagesLibrary m_instance;
	return m_instance;
}

ImageType ImagesLibrary::getImage(std::string imageName)
{
	return m_images[imageName];
}

void ImagesLibrary::resetImages()
{
	addImage("Splash");
}

void ImagesLibrary::addImage(std::string imageName)
{
	sf::Texture image;
	image.loadFromFile("Images/"+ imageName+ ".png");
	auto rec = std::make_shared<sf::RectangleShape>();
	
	rec->setTexture(&image);
	m_images[imageName] = rec;
}
