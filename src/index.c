#include <gtk/gtk.h>

// Callback function to handle the "destroy" signal
void on_window_destroy(GtkWidget *widget, gpointer data) {
    gtk_main_quit();
}

int main(int argc, char *argv[]) {
    // Initialize GTK
    gtk_init(&argc, &argv);

    // Create the main window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

    // Set the title of the window
    gtk_window_set_title(GTK_WINDOW(window), "Hello, GTK!");

    // Set the size of the window
    gtk_widget_set_size_request(window, 300, 200);

    // Connect the "destroy" signal to the callback function
    g_signal_connect(window, "destroy", G_CALLBACK(on_window_destroy), NULL);

    // Display all the elements in the window
    gtk_widget_show_all(window);

    // Start the GTK main loop
    gtk_main();

    return 0;
}
