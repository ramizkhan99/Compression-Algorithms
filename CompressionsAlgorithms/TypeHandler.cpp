#include "TypeHandler.h"

TypeHandler::TypeHandler(const std::string& path, const std::string& filename)
	: m_path(path), m_filename(filename)
{}

TypeHandler::~TypeHandler()
{}

std::string TypeHandler::GetFiletype() const
{
	return std::string();
}
