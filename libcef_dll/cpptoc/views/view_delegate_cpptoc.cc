// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/views/browser_view_delegate_cpptoc.h"
#include "libcef_dll/cpptoc/views/button_delegate_cpptoc.h"
#include "libcef_dll/cpptoc/views/menu_button_delegate_cpptoc.h"
#include "libcef_dll/cpptoc/views/panel_delegate_cpptoc.h"
#include "libcef_dll/cpptoc/views/textfield_delegate_cpptoc.h"
#include "libcef_dll/cpptoc/views/view_delegate_cpptoc.h"
#include "libcef_dll/cpptoc/views/window_delegate_cpptoc.h"
#include "libcef_dll/ctocpp/views/view_ctocpp.h"


namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

cef_size_t CEF_CALLBACK view_delegate_get_preferred_size(
    struct _cef_view_delegate_t* self, cef_view_t* view) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefSize();
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return CefSize();

  // Execute
  cef_size_t _retval = CefViewDelegateCppToC::Get(self)->GetPreferredSize(
      CefViewCToCpp::Wrap(view));

  // Return type: simple
  return _retval;
}

cef_size_t CEF_CALLBACK view_delegate_get_minimum_size(
    struct _cef_view_delegate_t* self, cef_view_t* view) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefSize();
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return CefSize();

  // Execute
  cef_size_t _retval = CefViewDelegateCppToC::Get(self)->GetMinimumSize(
      CefViewCToCpp::Wrap(view));

  // Return type: simple
  return _retval;
}

cef_size_t CEF_CALLBACK view_delegate_get_maximum_size(
    struct _cef_view_delegate_t* self, cef_view_t* view) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefSize();
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return CefSize();

  // Execute
  cef_size_t _retval = CefViewDelegateCppToC::Get(self)->GetMaximumSize(
      CefViewCToCpp::Wrap(view));

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK view_delegate_get_height_for_width(
    struct _cef_view_delegate_t* self, cef_view_t* view, int width) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return 0;

  // Execute
  int _retval = CefViewDelegateCppToC::Get(self)->GetHeightForWidth(
      CefViewCToCpp::Wrap(view),
      width);

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK view_delegate_on_parent_view_changed(
    struct _cef_view_delegate_t* self, cef_view_t* view, int added,
    cef_view_t* parent) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return;
  // Verify param: parent; type: refptr_diff
  DCHECK(parent);
  if (!parent)
    return;

  // Execute
  CefViewDelegateCppToC::Get(self)->OnParentViewChanged(
      CefViewCToCpp::Wrap(view),
      added?true:false,
      CefViewCToCpp::Wrap(parent));
}

void CEF_CALLBACK view_delegate_on_child_view_changed(
    struct _cef_view_delegate_t* self, cef_view_t* view, int added,
    cef_view_t* child) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return;
  // Verify param: child; type: refptr_diff
  DCHECK(child);
  if (!child)
    return;

  // Execute
  CefViewDelegateCppToC::Get(self)->OnChildViewChanged(
      CefViewCToCpp::Wrap(view),
      added?true:false,
      CefViewCToCpp::Wrap(child));
}

}  // namespace


// CONSTRUCTOR - Do not edit by hand.

CefViewDelegateCppToC::CefViewDelegateCppToC() {
  GetStruct()->get_preferred_size = view_delegate_get_preferred_size;
  GetStruct()->get_minimum_size = view_delegate_get_minimum_size;
  GetStruct()->get_maximum_size = view_delegate_get_maximum_size;
  GetStruct()->get_height_for_width = view_delegate_get_height_for_width;
  GetStruct()->on_parent_view_changed = view_delegate_on_parent_view_changed;
  GetStruct()->on_child_view_changed = view_delegate_on_child_view_changed;
}

template<> CefRefPtr<CefViewDelegate> CefCppToCRefCounted<CefViewDelegateCppToC,
    CefViewDelegate, cef_view_delegate_t>::UnwrapDerived(CefWrapperType type,
    cef_view_delegate_t* s) {
  if (type == WT_BROWSER_VIEW_DELEGATE) {
    return CefBrowserViewDelegateCppToC::Unwrap(
        reinterpret_cast<cef_browser_view_delegate_t*>(s));
  }
  if (type == WT_BUTTON_DELEGATE) {
    return CefButtonDelegateCppToC::Unwrap(
        reinterpret_cast<cef_button_delegate_t*>(s));
  }
  if (type == WT_MENU_BUTTON_DELEGATE) {
    return CefMenuButtonDelegateCppToC::Unwrap(
        reinterpret_cast<cef_menu_button_delegate_t*>(s));
  }
  if (type == WT_PANEL_DELEGATE) {
    return CefPanelDelegateCppToC::Unwrap(
        reinterpret_cast<cef_panel_delegate_t*>(s));
  }
  if (type == WT_TEXTFIELD_DELEGATE) {
    return CefTextfieldDelegateCppToC::Unwrap(
        reinterpret_cast<cef_textfield_delegate_t*>(s));
  }
  if (type == WT_WINDOW_DELEGATE) {
    return CefWindowDelegateCppToC::Unwrap(
        reinterpret_cast<cef_window_delegate_t*>(s));
  }
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template<> base::AtomicRefCount CefCppToCRefCounted<CefViewDelegateCppToC,
    CefViewDelegate, cef_view_delegate_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCppToCRefCounted<CefViewDelegateCppToC,
    CefViewDelegate, cef_view_delegate_t>::kWrapperType = WT_VIEW_DELEGATE;
