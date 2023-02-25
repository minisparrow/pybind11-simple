import robot 

rt = robot.Robot("alice ")
rt.do_task("pick up a bootle.")
print(rt.name)

rt.name = "bob "
rt.do_task("take taxi.")
print(rt.name)