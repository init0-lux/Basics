#! /usr/bin/python3

import pandas

from bokeh.charts import Scatter
from bokeh.charts import output_file
from bokeh.charts import show

df = pandas.DataFrame( columns = [ "X", "Y" ] );

df["X"] = [ 1, 2, 3, 4, 5 ]; 
df["Y"] = [ 6, 1, 2, 4, 5 ];

plot = Scatter( df, x = "X", y = "Y", title = "Temperature Observations", xlabel = "Day", ylabel = "Temperature" );

output_file( "ScatterBasics.html" );
show( plot );
# print( df );
