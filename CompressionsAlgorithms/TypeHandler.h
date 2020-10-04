#pragma once
#include <string>

class TypeHandler
{
public:
	TypeHandler(const std::string& path, const std::string& filename);
	~TypeHandler();

private:
	std::string m_filename;
	std::string m_path;
	std::string m_filetype;
	std::string m_extension;

	std::string GetFiletype() const;


};
