#pragma once
#include<wx/wx.h>
#include <wx/msgdlg.h>
#include "User.h"

class LoginFrame : public wxFrame
{
public:
	LoginFrame(const wxString& title);
	std::vector<User> getUser();

	void setID(const std::string&);
	std::string getID();
private:
	void onLoginButtonClicked(wxCommandEvent& evt); //點擊登入按鈕
	void onRegisterButtonClicked(wxCommandEvent& evt); //點擊註冊按鈕

	wxTextCtrl* userID;
	wxTextCtrl* password;

	std::string ID;
	User users;
	
};

