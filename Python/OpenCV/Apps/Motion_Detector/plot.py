#! /usr/bin/python3

from motion_detector import df

from bokeh.plotting import figure
from bokeh.plotting import show
from bokeh.plotting import output_file

from bokeh.models import HoverTool
from bokeh.models import ColumnDataSource

df[ "Start_string" ] = df[ "Start" ].dt.strftime( "%d - %m - %Y %H : %M : %S" );
df[ "End_string" ] = df[ "End" ].dt.strftime( "%d - %m - %Y %H : %M : %S" );

hover = HoverTool( tooltips = [ ( "Start ", "@Start_string" ), ( "End ", "@End_string" ) ] );
cds = ColumnDataSource( df );

plot = figure( x_axis_type = 'datetime', height = 100, width = 500, responsive = True, title = "Motion Graph" );

plot.yaxis.minor_tick_line_color = None;
plot.ygrid[ 0 ].ticker.desired_num_ticks = 1;

plot.add_tools( hover );

quad = plot.quad( left = "Start", right = "End", bottom = 0 , top = 1, color = 'green', source = cds );

output_file( "Graph.html" );

try:
    show( plot );
except:
    pass;
