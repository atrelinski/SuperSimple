

#include <iostream>
//#include <filesystem>
#include <experimental/filesystem>

int main()
{
	std::cout << "Temp directory is " << std::experimental::filesystem::temp_directory_path() << '\n';

	return 0;
}

