#include <iostream>
//#include <filesystem>
#include <experimental/filesystem>

int main()
{
	std::cout << "Temp directory is " << std::experimental::filesystem::temp_directory_path() << std::endl;

#ifdef NDEBUG
	std::cout << std::endl << "Configuration: RELEASE" << std::endl;
#else
	std::cout << std::endl << "Configuration: DEBUG" << std::endl;
#endif

	return 0;
}

