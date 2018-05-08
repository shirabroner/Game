#pragma once
#include  <unordered_map>
#include <string>
#include <SFML/Graphics.hpp>
#include <memory>

using std::shared_ptr;
typedef shared_ptr<sf::RectangleShape> ImageType;

class ImagesLibrary
{
public:
	~ImagesLibrary();
	static ImagesLibrary& getInstance();
	ImageType getImage(std::string imageName);

private:
	std::unordered_map<std::string, ImageType> m_images;
	void resetImages();
	void addImage(std::string imageName);
	ImagesLibrary();
	ImagesLibrary(const ImagesLibrary&) {}
};

