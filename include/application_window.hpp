#ifndef APPLICATION_WINDOW_HPP
#define APPLICATION_WINDOW_HPP

#include <gtkmm.h>
#include "application.hpp"

class ApplicationWindow {
   public:
    ApplicationWindow(Application* app);

   private:
    Application* app;

    Glib::RefPtr<Gtk::Builder> builder;

    Glib::RefPtr<Gio::Settings> settings;

    Gtk::ApplicationWindow* window;
    Gtk::Switch* enable_all_apps;
    Gtk::Switch* theme_switch;
    Gtk::ToggleButton* use_default_sink;
    Gtk::ToggleButton* use_default_source;
    Gtk::ComboBox* input_device;
    Gtk::ComboBox* output_device;
    Gtk::Adjustment* buffer_in;
    Gtk::Adjustment* buffer_out;
    Gtk::Adjustment* latency_in;
    Gtk::Adjustment* latency_out;
    Gtk::Switch* show_spectrum;
    Gtk::Adjustment* spectrum_n_points;
};

#endif
