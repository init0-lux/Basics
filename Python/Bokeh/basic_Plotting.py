#! /usr/bin/python3

from bokeh.plotting import figure
from bokeh.plotting import output_file
from bokeh.plotting import show

plot = figure( plot_width = 500, plot_height = 400, title = "TMIs" );

# plot.triangle( [ 1, 2, 3, 4, 5 ], [ 5, 6, 7, 8, 9 ], alpha = 0.5, color = 'black' );

plot.title = "Earthquake";
plot.title_text_color = "Orange";
plot.title_text_font  = "mono12";
plot.title_text_font_style = "italic";

plot.yaxis.minor_tick_line_color = "Blue";

plot.xaxis.axis_label = "Times";
plot.yaxis.axis_label = "Value";

plot.circle( [ 1, 2, 3, 4, 5 ], [ 5, 6, 7, 2, 8 ], size = [ i * 2 for i in [ 1, 2, 3, 4, 5 ] ], color = "black", alpha = 1 );
plot.line( [ 5, 3, 4, 2, 6, 5 ], [ 2, 1, 5, 3, 5, 2 ], line_width = 2, color = 'red' );

output_file( "PlottingBasics.html" );
# show( plot );
