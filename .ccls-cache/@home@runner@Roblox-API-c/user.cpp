#include "user.h"

std::string func::User::GetProfileLink(int userid)
{
  std::string url = "https://www.roblox.com/users/" + std::to_string(userid) + "/profile";
  return url;
}