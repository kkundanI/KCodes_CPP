#include <iostream>
#include <string>

class TextEditor {
 public:
  TextEditor() {
    text_ = "";
    cursor_pos_ = 0;
  }

  void AddText(const std::string& text) {
    text_.insert(cursor_pos_, text);
    cursor_pos_ += text.length();
  }

  void DeleteText(int k) {
    if (k > cursor_pos_) {
      std::cerr << "Cannot delete more than current cursor position\n";
      return;
    }

    text_.erase(cursor_pos_, k);
    cursor_pos_ -= k;
  }

  void MoveCursorLeft(int k) {
    cursor_pos_ -= k;
    if (cursor_pos_ < 0) {
      cursor_pos_ = 0;
    }
  }

  void MoveCursorRight(int k) {
    cursor_pos_ += k;
    if (cursor_pos_ > text_.length()) {
      cursor_pos_ = text_.length();
    }
  }

  std::string GetText() const { return text_; }

 private:
  std::string text_;
  int cursor_pos_;
};

int main() {
  TextEditor editor;

  editor.AddText("This is a text editor.");
  editor.MoveCursorRight(10);
  editor.DeleteText(5);
  editor.MoveCursorLeft(2);

  std::cout << editor.GetText() << std::endl;

  return 0;
}
