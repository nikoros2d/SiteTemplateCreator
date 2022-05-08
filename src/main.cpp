#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

std::string back_Pic;
std::string title_Text;
std::string heading;
std::string m_descrip1;
std::string m_descrip2;
std::string m_descrip3;
std::string name_Butt;
std::string null;

using namespace std;
int proverkavar(int variant) {
  if (variant != 1 && variant != 2 && variant != 3) return 1;
  return 0;
}
int iffileexs(string d) {
  std::ifstream file;
  file.open(d);
  file.close();
  if (file) { return 0; }
  return 35;
}
void generate_Page() {
  std::ofstream file_Html("index.html");
  file_Html << "<!DOCTYPE html>" << endl;
  file_Html << "<html lang=\"en\">" << endl;
  file_Html << "<head>" << endl;
  file_Html << "<title>" << title_Text << "</title>" << endl;
  file_Html << "<link href=\"../css/bootstrap.css\" rel=\"stylesheet\">\n";
  file_Html << "<meta charset=\"UTF-8\">" << endl;
  file_Html << "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n";
  file_Html << "</head>" << endl;
  file_Html << "<body>" << endl;
  file_Html << "<div class=\"wrapper\">" << endl;
  file_Html << "<section class=\"fullscreen\">" << endl;
  file_Html << "<div class=\"video-bg\">" << endl;
  file_Html << "<video src=" << '"' << back_Pic << '"' << " type=\"video/mp4\" autoplay muted loop></video>" << endl;
  file_Html << "<div class=\"effects\"></div>" << endl;
  file_Html << "<div class=\"video-bg__content__title\">" << endl;
  file_Html << "<h1>" << heading << "</h1>" << endl;
  file_Html << "<div class=\"video-bg__content__Text\">" << endl;
  file_Html << "<div><p>" << m_descrip1 << "</p></div>" << endl;
  file_Html << "<div><p>" << m_descrip2 << "</p></div>" << endl;
  file_Html << "<div><p>" << m_descrip3 << "</p></div>" << endl;
  file_Html << "</div>" << endl;
  file_Html << "<a href=\"#\" class=\"video-bg__content__Button\">" << name_Butt << "</a>\n";
  file_Html << "</div>" << endl;
  file_Html << "</section>" << endl;
  file_Html << "<footer class=\"footer\">" << endl;
  file_Html << "<div class=\"footer__body\">" << endl;
  file_Html
      << "<p style=\"font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;\">© Static Website Generator Quicky</p>"
      << endl;
  file_Html << "</div>" << endl;
  file_Html << "</footer>" << endl;
  file_Html << "</div>" << endl;
  file_Html << "</body>" << endl;
  file_Html << "</html>" << endl;
  file_Html.close();
}

void shablon_page() {
  std::ofstream file_Html("shablon.html");
  file_Html << "<!DOCTYPE html>" << endl;
  file_Html << "<html lang=\"en\">" << endl;
  file_Html << "<head>" << endl;
  file_Html << "<title>" << "ShablonPage" << "</title>" << endl;
  file_Html << "<link href=\"../css/bootstrap.css\" rel=\"stylesheet\">\n";
  file_Html << "<meta charset=\"UTF-8\">" << endl;
  file_Html << "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n";
  file_Html << "</head>" << endl;
  file_Html << "<body>" << endl;
  file_Html << "<div class=\"wrapper\">" << endl;
  file_Html << "<section class=\"fullscreen\">" << endl;
  file_Html << "<div class=\"video-bg\">" << endl;
  file_Html << "<video src=\"../img/video.mp4\" type=\"video/mp4\" autoplay muted loop></video>" << endl;
  file_Html << "<div class=\"effects\"></div>" << endl;
  file_Html << "<div class=\"video-bg__content__title\">" << endl;
  file_Html << "<h1>Hi-this is Emmy!</h1>" << endl;
  file_Html << "<div class=\"video-bg__content__Text\">" << endl;
  file_Html << "<div><p>my portfolio page :)</p></div>" << endl;
  file_Html << "<div><p>my portfolio page :)</p></div>" << endl;
  file_Html << "<div><p>my portfolio page :)</p></div>" << endl;
  file_Html << "</div>" << endl;
  file_Html << "<a href=\"#\" class=\"video-bg__content__Button\">Explore</a>\n";
  file_Html << "</div>" << endl;
  file_Html << "</section>" << endl;
  file_Html << "<footer class=\"footer\">" << endl;
  file_Html << "<div class=\"footer__body\">" << endl;
  file_Html
      << "<p style=\"font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;\">© Static Website Generator Quicky</p>"
      << endl;
  file_Html << "</div>" << endl;
  file_Html << "</footer>" << endl;
  file_Html << "</div>" << endl;
  file_Html << "</body>" << endl;
  file_Html << "</html>" << endl;
  file_Html.close();
}

void print_menu() {
  system("cls");
  printf("What do you want to do?\n");
  printf("1. Generate a page template\n");
  printf("2. Create a page\n");
  printf("3. Exit\n");
  printf(">");
}

int get_variant(int count) {
  int i, variant, provvar;
  char s[2];
  for (i = 0;;) {
    cin >> ("%s", s);
    sscanf(s, "%d", &variant);
    provvar = proverkavar(variant);
    if (provvar == 0)break;
    else printf("Incorrect input. Try again: ");
  }
  return variant;
}

int main() {
  int variant, x;
  do {
    print_menu();

    variant = get_variant(3);

    switch (variant) {
      case 1:std::cout << "Template generation..." << endl;
        sleep(3);
        std::cout << "The template is ready" << endl;
        shablon_page();
        sleep(2);

        break;

      case 2:std::cout << "";
        std::getline(std::cin, null);
        std::cout << "Enter the path to the background video and press 'Enter':" << endl;
        std::getline(std::cin, back_Pic);
        std::ifstream file;
        file.open(back_Pic);
        file.close();

        if (file) {}
        else {
          std::cout << "The file path is specified incorrectly" << endl;
          std::cout << "Enter the path to the background video and press 'Enter':" << endl;
          std::getline(std::cin, back_Pic);
        }

        std::cout << "Enter the page name and press 'Enter':" << endl;
        std::getline(std::cin, title_Text);

        std::cout << "Enter the title text and press 'Enter':" << endl;
        std::getline(std::cin, heading);

        std::cout << "Enter description 1 and press 'Enter':" << endl;
        std::getline(std::cin, m_descrip1);

        std::cout << "Enter description 2 and press 'Enter':" << endl;
        std::getline(std::cin, m_descrip2);

        std::cout << "Enter description 3 and press 'Enter':" << endl;
        std::getline(std::cin, m_descrip3);

        std::cout << "Enter the name of the button and press 'Enter':" << endl;
        std::getline(std::cin, name_Butt);
        generate_Page();

        break;
    }
  } while (variant != 3);

  return 0;
}