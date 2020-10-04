#include "TypeHandler.h"
#include <iostream>

TypeHandler::TypeHandler(const std::filesystem::path& filepath) : m_filepath(filepath)
{
	m_extension = m_filepath.extension();
	m_filename = m_filepath.filename();
	m_location = m_filepath.parent_path();
}

void TypeHandler::ShowInfo()
{
	std::wcout << *this << std::endl;
}

std::string TypeHandler::GetFiletype() const
{
	return std::string();
}

std::wostream& operator<<(std::wostream& output, const TypeHandler& T)
{
	output << "Filename: " << T.m_filename << "\nExtension: " << T.m_extension << "\nLocation: " << T.m_location;
	return output;
}
