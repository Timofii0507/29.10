#include "../Library/Library.h"

const std::wstring application_titel_dev = L"Application Dev";
const std::wstring application_titel_prod = L"Application Prod";

const string api_url = "https://rickandmortyapi.com/api?auth_key=";
const string api_key_pattern = "?auth_key=";

string GetDevKey() 
{
	return "my_dev_key";
}

string GetProdKey()
{
	return "my_prod_key";
}