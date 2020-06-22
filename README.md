# Mapping

<h3>A little package to save the LeGO-LOAM generated Maps from your Robots.</h3>

Follow the instructions to install and run the pacakge.

Compile
cd ~/catkin_ws/src
git clone https://github.com/grvbhosale/Mapping.git
cd ..
catkin_make

Check if package works properly - rosrun mapsaver mapsaver (Should not display anything.)

To launch with LeGOLOAM-BOR
cd /home/gaurav/catkin_ws/src/LeGO-LOAM-BOR/LeGO-LOAM/launch 
edit run.launch
add -     <node pkg="mapsaver" type="mapsaver" name="mapsaver">

Run the lego-loam launcher as you previously did, you shoud find -
/home/gaurav/catkin_ws/src/mapsaver/maps/map_pcd.pcd

TO view this map you install pcl viewer , if you dnt have it already

pcl_viewer -multiview 1 [map_pcd.pcd] // use thegiven code , if you are already on the same DIR, otherwise specifiy the path. 

