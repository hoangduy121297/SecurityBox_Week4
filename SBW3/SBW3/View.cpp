#include "stdafx.h"
#include "View.h"
#include "iostream"
using namespace std;

View::View()
{
	trangthaidangnhap = 0;
}
void View::Menu() {
	do {
		cout << "chon cac chuc nang sau:" << endl;
		cout << "1.Dang nhap" << endl;
		cout << "2.Dang ky" << endl;
		cout << "3.Dang xuat" << endl;
		cout << "4.Add Friend" << endl;
		cout << "5.Block" << endl;
		cout << "6.Gui tin nhan theo cach nhap ten Tai Khoan" << endl;
		cout << "7.Gui tin nhan bang to hop phim Ctrl+L" << endl;
		cout << "8.Xem tin nhan da gui" << endl;
		cout << "9.Xem tin nhan den" << endl;
		cout << "10.Xem danh sach ban be" << endl;
		cout << "Ban chon chuc nang:";
		
		cin >> select;
		switch (select)
		{
		case 1: {
			system("cls");
			if (trangthaidangnhap == 1) {
				cout << "-----------------------" << endl;
				cout << "Ban da dang nhap roi" << endl;
				cout << "-----------------------" << endl;
				break;
			}
		
			int check = c.DangNhap();
			if (check == 1) {
				cout << "-----------------------" << endl;
				cout << "Dang nhap thanh cong" << endl;
				cout << "-----------------------" << endl;
				trangthaidangnhap = 1;
				break;
				
			}
			if (check == 0) {
				c.Error();
				break;
			}
			if (check == -1) {
				cout << "-----------------------" << endl;
				cout << "Sai ten dang nhap hoac mat khau" << endl;
				cout << "-----------------------" << endl;
			}
			break;
		}
		case 2: {
			system("cls");
			int check = c.DangKyTK();
			if (check == 0) {
				c.Error();
				break;
			}
			else if (check == 1) {
				cout << "-----------------------" << endl;
				cout << "Dang ky thanh cong" << endl;
				cout << "-----------------------" << endl;
				break;
			}
			
		}
		case 3: {
			system("cls");
			trangthaidangnhap = 0;
			c.DangXuat();
			cout << "-----------------------" << endl;
			cout << "Dang xuat thanh cong" << endl;
			cout << "-----------------------" << endl;
			break;
		}
		case 4: {
			system("cls");
			if (trangthaidangnhap == 0) {
				cout << "-----------------------" << endl;
				cout << "Ban chua dang nhap " << endl;
				cout << "-----------------------" << endl;
				break;
			}
			int check=c.AddFriend();
			if (check == 0) {
				c.Error();
				break;
			}
			if (check == -1) {
				cout << "-----------------------" << endl;
				cout << "Nguoi dung can AddFriend nay ko ton tai " << endl;
				cout << "-----------------------" << endl;
				break;
			}
			
			cout << "-----------------------" << endl;
			cout << "Addfriend thanh cong " << endl;
			cout << "-----------------------" << endl;
			
			break;
		}
		case 5: {
			system("cls");
			if (trangthaidangnhap == 0) {
				cout << "-----------------------" << endl;
				cout << "Ban chua dang nhap " << endl;
				cout << "-----------------------" << endl;
				break;
			}
			int check=c.Block();
			if (check == 0) {
				c.Error();
				break;
			}
			if (check == -1) {
				cout << "-----------------------" << endl;
				cout << "Nguoi dung can Block nay ko ton tai " << endl;
				cout << "-----------------------" << endl;
				break;
			}
			cout << "-----------------------" << endl;
			cout << "Addfriend thanh cong " << endl;
			cout << "-----------------------" << endl;
			break;
		}
		case 6: {
			system("cls");
			if (trangthaidangnhap == 0) {
				cout << "------------------------" << endl;
				cout << "Ban chua dang nhap" << endl;
				cout << "------------------------" << endl;
				break;
			}
			int check = c.GuiTinNhan1();
			if (check == 0) {
				c.Error();
				break;
			}
			if (check == -1) {
				cout << "------------------------------------------" << endl;
				cout << "Nguoi dung can gui tin nhan nay ko ton tai " << endl;
				cout << "------------------------------------------" << endl;
				break;
			}
			if (check == -2) {
				cout << "------------------------------------------" << endl;
				cout << "Khong the gui tin nhan cho tai khoan block " << endl;
				cout << "------------------------------------------" << endl;
				break;
			}
			cout << "------------------------" << endl;
			cout << "Gui tin nhan thanh cong" << endl;
			cout << "------------------------" << endl;
			break;
		}
		case 7: {
			system("cls");
			if (trangthaidangnhap == 0) {
				cout << "------------------------" << endl;
				cout << "Ban chua dang nhap" << endl;
				cout << "------------------------" << endl;
				break;
			}
			int check = c.GuiTinNhan2();
			if (check == 0) {
				c.Error();
				break;
			}
			if (check == 1) {
				cout << "------------------------" << endl;
				cout << "Gui tin nhan thanh cong" << endl;
				cout << "------------------------" << endl;
			}
			cout << "------------------------" << endl;
			cout << "Chua gui duoc tin nhan" << endl;
			cout << "------------------------" << endl;
			break;
		}
		case 8: {
			system("cls");
			if (trangthaidangnhap == 0) {
				cout << "------------------------" << endl;
				cout << "Ban chua dang nhap" << endl;
				cout << "------------------------" << endl;
				break;
			}
			int check = c.XemCacTinNhanDaGui();
			if (check == 0) {
				c.Error();
				break;
			}
			break;
		}
		case 9: {
			system("cls");
			if (trangthaidangnhap == 0) {
				cout << "------------------------" << endl;
				cout << "Ban chua dang nhap" << endl;
				cout << "------------------------" << endl;
				break;
			}
			int check = c.XemTinNhanDen();
			if (check == 0) {
				c.Error();
				break;
			}
			break;
		}
		case 10: {
			system("cls");
			if (trangthaidangnhap == 0) {
				cout << "------------------------" << endl;
				cout << "Ban chua dang nhap" << endl;
				cout << "------------------------" << endl;
				break;
			}
			c.DanhSachBanbe();
			break;
		}
		default:
			cout << "---------------------" << endl;
			cout << "Ban chon sai, Chon lai" << endl;
			cout << "---------------------" << endl;
			break;
		}
	} while (select);
	

	
}

View::~View()
{
}
