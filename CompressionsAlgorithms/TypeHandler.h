#pragma once
#include <filesystem>

class TypeHandler
{
public:
	TypeHandler(const std::filesystem::path& filepath);
	friend std::wostream& operator<<(std::wostream& output, const TypeHandler& T);
	void ShowInfo();

private:
	std::wstring m_filename;
	std::wstring m_location;
	std::wstring m_filetype;
	std::wstring m_extension;
	std::wstring m_filesize;
	std::filesystem::path m_filepath;

	std::string GetFiletype() const;
};
