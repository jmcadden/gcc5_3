
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_ViewAttributeSet__
#define __javax_swing_text_html_ViewAttributeSet__

#pragma interface

#include <javax/swing/text/html/MultiAttributeSet.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
          class AttributeSet;
          class View;
        namespace html
        {
            class StyleSheet;
            class ViewAttributeSet;
        }
      }
    }
  }
}

class javax::swing::text::html::ViewAttributeSet : public ::javax::swing::text::html::MultiAttributeSet
{

public: // actually package-private
  ViewAttributeSet(::javax::swing::text::View *, ::javax::swing::text::html::StyleSheet *);
public:
  virtual ::java::lang::Object * getAttribute(::java::lang::Object *);
  virtual ::javax::swing::text::AttributeSet * getResolveParent();
private:
  ::javax::swing::text::View * __attribute__((aligned(__alignof__( ::javax::swing::text::html::MultiAttributeSet)))) view;
  ::javax::swing::text::html::StyleSheet * styleSheet;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_html_ViewAttributeSet__
