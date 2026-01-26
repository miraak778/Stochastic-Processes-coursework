set terminal pngcairo size 1200,960
set output "probablity_7.png"
set multiplot layout 2,2 title "Random walker (ensemble of 1000 walks) for p = 0.7"
set title "Random Walker for n = 10"
set xlabel "steps (n)"
set ylabel "positions (x)"
set key off
set grid 
set xrange [0:11]
set yrange [-11:11]

plot "data_10_7.txt" every :1 using 1:2 with lines

#set terminal wxt 1
set title "Random Walker for n = 100"
set xlabel "steps (n)"
set ylabel "positions (x)"
set key off
set grid 
set xrange [0:101]
set yrange [-101:101]

plot "data_100_7.txt" every :1 using 1:2 with lines

#set terminal wxt 2
set title "Random Walker for n = 1000"
set xlabel "steps (n)"
set ylabel "positions (x)"
set key off
set grid 
set xrange [0:1001]
set yrange [-1001:1001]

plot "data_1000_7.txt" every :1 using 1:2 with lines