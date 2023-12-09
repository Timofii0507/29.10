#include "Core/Library/Library.h"
#include "Core/BuildMode/BuildMode.h"
#include "Data/Data_Sources/Remote/Remote_api.h"
#include "Presentation/Screen/Home.h"

const string build_mode = "DEV";

void Application()
{
	string request_url;
	if (build_mode == "DEV")
	{
		request_url = BuildAsDev();
	}
	else
	{
		request_url = BuildAsDev();
	}
	string response = FetchApiData(request_url);
	Home(response);
}