# 2026-11-25T12:26:20.227791274
import vitis

client = vitis.create_client()
client.set_workspace(path="2-pynq_overlays")

comp = client.create_hls_component(name = "adder_hls",part = "xc7z020clg400-1",cfg_file = ["hls_config.cfg"],template = "empty_hls_component")

comp = client.get_component(name="adder_hls")
comp.run(operation="C_SIMULATION")

comp.run(operation="SYNTHESIS")

comp.run(operation="PACKAGE")

vitis.dispose()

