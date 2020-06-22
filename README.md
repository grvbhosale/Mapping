# Mapping

<h3>A little package to save the LeGO-LOAM generated Maps from your Robots.</h3>

Follow the instructions to install and run the pacakge.<br />

<b>Compile</b><br />
```
cd ~/catkin_ws/src
git clone https://github.com/grvbhosale/Mapping.git
cd ..
catkin_make
```
<br /><br />
Check if package works properly - rosrun mapsaver mapsaver (Should not display anything.)<br />
<br />

<b>To launch with LeGOLOAM-BOR</b><br />
cd /home/gaurav/catkin_ws/src/LeGO-LOAM-BOR/LeGO-LOAM/launch <br />
edit run.launch
<br />
add - `<node pkg="mapsaver" type="mapsaver" name="mapsaver">`<br />
<br /><br />
Run the lego-loam launcher as you previously did, you shoud find -<br />
/home/gaurav/catkin_ws/src/mapsaver/maps/map_pcd.pcd<br />
<br />
To view this map you install pcl viewer , if you dnt have it already<br />
<br />
`pcl_viewer -multiview 1 [map_pcd.pcd]` // use thegiven code , if you are already on the same DIR, otherwise specifiy the path. <br />

<b> Image of PCD Map </b>
![Image of Mapping](https://github.com/grvbhosale/Mapping/blob/master/map_pcd.PNG)
