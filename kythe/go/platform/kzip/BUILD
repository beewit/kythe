load("//tools:build_rules/shims.bzl", "go_test", "go_library")

package(default_visibility = ["//kythe:default_visibility"])

go_library(
    name = "kzip",
    srcs = ["kzip.go"],
    deps = [
        "//kythe/go/platform/kcd/kythe",
        "//kythe/proto:analysis_go_proto",
        "//kythe/proto:buildinfo_go_proto",
        "//kythe/proto:cxx_go_proto",
        "//kythe/proto:go_go_proto",
        "//kythe/proto:java_go_proto",
        "@com_github_golang_protobuf//jsonpb:go_default_library",
    ],
)

go_test(
    name = "kzip_test",
    srcs = ["kzip_test.go"],
    deps = [
        ":kzip",
        "//kythe/proto:analysis_go_proto",
        "//kythe/proto:storage_go_proto",
        "@com_github_golang_protobuf//proto:go_default_library",
    ],
)
