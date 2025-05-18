// String.h: interface for the String class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STRING_H__7B93FB5C_B6D2_4254_A557_A09C540E5CC8__INCLUDED_)
#define AFX_STRING_H__7B93FB5C_B6D2_4254_A557_A09C540E5CC8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class String  
{
private:
	char *p;
public:
	String(char *sp);
	String(String &str);
	virtual ~String();
	void operator=(String & str);
	int operator==(String & str);
	String /*&*/ operator+=(String & str);
	void show();
};

#endif // !defined(AFX_STRING_H__7B93FB5C_B6D2_4254_A557_A09C540E5CC8__INCLUDED_)
